import pygame
pygame.init()

screen = pygame.display.set_mode((800,800))
pygame.display.set_caption("square buildings")
clock = pygame.time.Clock()

Gameloop = True

while Gameloop == True:
    for i in range(20):
        for j in range(20):
            pygame.draw.circle(screen, (200,200,0), ((i*40)+20,(j*40)+20),20)
            pygame.draw.rect(screen, (200,0,100), ((i*40)+10,(j*40)+10,20,20))
            pygame.draw.circle(screen, (100,0,200), ((i*40)+20,(j*40)+20),8)
            #-----things

    pygame.display.flip()

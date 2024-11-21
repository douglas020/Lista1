#include <stdio.h>

int main() {
    int hora, minuto, segundo;
    int duracaoSegundos;
    
    // Leitura do horário de início
    printf("Digite o horário de início (hora, minuto, segundo):\n");
    scanf("%d %d %d", &hora, &minuto, &segundo);
    
    // Leitura da duração em segundos
    printf("Digite a duração em segundos:\n");
    scanf("%d", &duracaoSegundos);
    
    // Cálculo do total de segundos a partir do horário de início
    int totalSegundosInicio = hora * 3600 + minuto * 60 + segundo;
    
    // Cálculo do total de segundos no término
    int totalSegundosTermino = totalSegundosInicio + duracaoSegundos;
    
    // Cálculo do novo horário
    hora = (totalSegundosTermino / 3600) % 24; // hora em formato 24h
    minuto = (totalSegundosTermino % 3600) / 60;
    segundo = totalSegundosTermino % 60;
    
    // Exibição do novo horário
    printf("O horário de término da experiência é: %02d:%02d:%02d\n", hora, minuto, segundo);
    
    return 0;
}
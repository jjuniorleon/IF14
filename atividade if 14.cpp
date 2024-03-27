    #include <stdio.h>

int main() {
    float n1, n2, n3, m;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    
	if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10) {
        printf("Por favor, digite notas validas de 0 a 10.\n");
        return 1;
    }
    
         m = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
    
    if (m >= 0 && m <= 2.9) {
        printf("O aluno esta reprovado.\n");
    } else if (m >= 3 && m <= 4.9) {
        printf("O aluno esta em recuperacao.\n");
    } else {
        printf("O aluno foi aprovado!\n");
    }
}

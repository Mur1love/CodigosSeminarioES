// Contar vogais em uma palavra
import java.util.Scanner;

public class ContarVogais {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        System.out.print("Digite uma palavra: ");
        String palavra = sc.nextLine().toLowerCase();
        sc.close();

        int contador = 0;

        for (int i = 0; i < palavra.length(); i++) {
            char c = palavra.charAt(i);
            if ("aeiou".indexOf(c) != -1) {
                contador++;
            }
        }

        System.out.println("Número de vogais: " + contador);
    }
}

// Mostrar números de 1 até N e indicar se são pares ou ímpares
package Comparativos;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Digite um número: ");
        int n = sc.nextInt();
        sc.close();


        if (n % 2 == 0) {
            System.out.println(n + " é par");
        } else {
            System.out.println(n + " é ímpar");
        }
    }
}

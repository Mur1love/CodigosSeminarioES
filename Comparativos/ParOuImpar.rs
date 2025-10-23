// Mostrar números de 1 até N e indicar se são pares ou ímpares
use std::io;

fn main() {
    println!("Digite um número:");

    let mut entrada = String::new();
    io::stdin()
        .read_line(&mut entrada)
        .expect("Erro ao ler entrada");

    let n: i32 = entrada.trim().parse().expect("Digite um número válido");


    if n % 2 == 0 {
        println!("{} é par", n);
    } else {
        println!("{} é ímpar", n);
    }
}

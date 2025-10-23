use std::io;

fn main() {
    println!("Digite um número:");

    let mut entrada = String::new();
    io::stdin()
        .read_line(&mut entrada)
        .expect("Erro ao ler entrada");

    let numero: i32 = entrada.trim().parse().expect("Digite um número válido");

    if numero % 2 == 0 {
        println!("{} é par.", numero);
    } else {
        println!("{} é ímpar.", numero);
    }
}

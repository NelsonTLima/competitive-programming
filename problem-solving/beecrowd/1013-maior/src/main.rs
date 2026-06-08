 use std::io;

fn main() {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Couldn't read input");

    let inputs_vector : Vec<&str>= input
        .trim()
        .split(" ")
        .collect();

    let a : i64 = inputs_vector[0].parse().expect("You didn't inform first number.");
    let b : i64 = inputs_vector[1].parse().expect("You didn't inform second number.");
    let c : i64 = inputs_vector[2].parse().expect("You didn't infor third number.");

    let maior_ab = (a + b + (a - b).abs())/2;
    let maior = (c + maior_ab + (c - maior_ab).abs())/2;

    println!("{} eh o maior", maior);
}

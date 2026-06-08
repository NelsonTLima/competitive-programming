use std::io;

fn input() -> String {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Didn't read the input.");
    return input;
}

fn main() {
    let inputs = input();
    let vector : Vec<&str>= inputs
        .trim()
        .split(" ")
        .collect();

    let pi : f64 = 3.14159;
    let a : f64 = vector[0].parse().unwrap();
    let b : f64 = vector[1].parse().unwrap();
    let c : f64 = vector[2].parse().unwrap();

    let triangulo = a * c / 2.0;
    let circulo = pi * (c.powf(2.0));
    let trapezio = (a + b) * c / 2.0;
    let quadrado = b.powf(2.0);
    let retangulo = a * b;

    println!("TRIANGULO: {:.3}", triangulo);
    println!("CIRCULO: {:.3}", circulo);
    println!("TRAPEZIO: {:.3}", trapezio);
    println!("QUADRADO: {:.3}", quadrado);
    println!("RETANGULO: {:.3}", retangulo);
}

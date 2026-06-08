use std::io;

fn input() -> String {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Didn't read the input.");
    return input;
}

fn main() {
    let (distancia_percorrida, litros_gastos) : (f64, f64);
    let mut inputs = input();
    distancia_percorrida = inputs.trim().parse().unwrap();
    inputs = input();
    litros_gastos = inputs.trim().parse().unwrap();
    let consumo = distancia_percorrida / litros_gastos;

    println!("{:.3} km/l", consumo);
}

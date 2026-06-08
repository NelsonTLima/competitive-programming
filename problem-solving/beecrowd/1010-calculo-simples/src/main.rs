use std::io;

fn input() -> String {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .unwrap();
    return input;
}

fn main() {
    let mut pagar = 0.0;

    for _i in 0..2{

        let input = input();
        let vector : Vec<&str>= input
            .trim()
            .split(" ")
            .collect();

        let _ = vector[0];
        let numero : f64 = vector[1].parse().unwrap();
        let valor : f64 = vector[2].parse().unwrap();

        pagar = pagar + numero * valor;
    }

    println!("VALOR A PAGAR: R$ {:.2}", pagar);
}

use std::io;

fn main() {
    let (mut nome, mut gd, mut saltos) : (String, f64, Vec<f64>);
    let (mut resultado_final, mut saida) : (f64, String);
    let mut saidas : Vec<String>=Vec::new();

    let n : u8 = input().parse().unwrap();

    for _i in 0..n {
        nome = input();
        gd = input().parse().unwrap();
        saltos = input().split(" ").map(|x| x.parse::<f64>().unwrap()).collect();

        saltos.sort_by(|a, b| a.partial_cmp(b).unwrap());
        saltos.remove(0);
        saltos.pop();

        resultado_final = saltos.iter().sum::<f64>() * gd;
        saida = format!("{} {:.2}", nome, resultado_final);
        saidas.push(saida);
    }
    for i in saidas.iter(){
        println!("{}", i);
    }
}

fn input() -> String {
    let mut input : String = String::new();
    io::stdin().read_line(&mut input).unwrap();
    return input.trim().to_string();
}

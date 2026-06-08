use std::io;

fn main() {
    let n : u8 = input().parse().unwrap();
    let medidas : Vec<u32>= input()
        .split(" ")
        .map(|x| x.parse::<u32>().unwrap())
        .collect();
    let mut saida : usize = 0;
    let mut maior : u32 = medidas[0];

    for i in 0..n {
        let i = i as usize;
        if medidas[i] < maior{
            saida = i + 1;
            break
        }
        maior = medidas[i]
    }
    println!("{}", saida)
}

fn input() -> String {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    input = input.trim().to_string();
    return input
}

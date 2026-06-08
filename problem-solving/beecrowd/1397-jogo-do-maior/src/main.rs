use std::io;

fn input() -> String {
    let mut input : String = String::new();
    io::stdin().read_line(&mut input).unwrap();
    return input.trim().to_string()
}

fn main() {
    let (mut rodadas, mut a, mut b,  mut maior,  mut ab) : (u8, u8, u8, u8, Vec<u8>);
    let mut output : Vec<String>=Vec::new();

    loop {
        rodadas = input().parse().unwrap();
        if rodadas == 0 {break}
        let (mut score_a, mut score_b) : (u8, u8) = (0, 0);
        for i in 0..rodadas {
            ab = input().split(" ").map(|x| x.parse::<u8>().unwrap()).collect();

            a = ab[0];
            b = ab[1];

            maior = *ab.iter().max().unwrap();

            if (maior == a) && (maior == b) {
            }else if maior == a {
                score_a += 1;
            }else{
                score_b += 1;
            }
        }
        output.push(format!("{} {}", score_a, score_b));
    }
    for i in output {
        println!("{}", i);
    }
}

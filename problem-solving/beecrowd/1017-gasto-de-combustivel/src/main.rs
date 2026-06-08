use std::io;

fn main() {
    let mut tempo_de_viagem = String::new();
    io::stdin().read_line(&mut tempo_de_viagem).expect("Didn't read the line.");
    let tempo_de_viagem : f64 = tempo_de_viagem
.trim()
        .parse()
        .unwrap();

    let mut velocidade_media = String::new();
    io::stdin().read_line(&mut velocidade_media).expect("Didn't read the line.");
    let velocidade_media : f64 = velocidade_media
        .trim()
        .parse()
        .unwrap();

    let volume_necessario = velocidade_media * tempo_de_viagem / 12.0;
    println!("{:.3}", volume_necessario);
}

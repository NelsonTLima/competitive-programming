use std::io;

fn main() {
    let mut vetor_respostas : Vec<char>=vec![];

    loop{
        let n_questoes : u32 = to_u32(input());
        if n_questoes == 0 { break }

        for i in 0..n_questoes{
            let mut vetor_boleanos : Vec<bool>=vec![];
            let resposta = input();

            for parte in resposta.split(" "){
                if let Ok(alternativa) = parte.parse::<u8>() {
                    if alternativa > 127{
                        vetor_boleanos.push(false);
                    }else{
                        vetor_boleanos.push(true);
                    }
                }
            }

            let resposta : char;
            match vetor_boleanos.as_slice(){
                [true, false, false, false, false] => resposta = 'A',
                [false, true, false, false, false] => resposta = 'B',
                [false, false, true, false, false] => resposta = 'C',
                [false, false, false, true, false] => resposta = 'D',
                [false, false, false, false, true] => resposta = 'E',
                _ => resposta = '*'
            }
            vetor_respostas.push(resposta)
        }
    }

    for resposta in vetor_respostas.iter(){
        println!("{}", resposta);
    }
}

fn input() -> String {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Didn't read the line.");
    input = input.trim().to_string();
    return input
}

fn to_u32(x : String) -> u32 {
    let n : u32 = x.parse().unwrap();
    return n
}

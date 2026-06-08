use std::io;

fn main(){
    //Get input and parse to u32.
    let mut amount = String::new();
    io::stdin().read_line(&mut amount).expect("Didn't read the line");
    let mut amount : f64 = amount.trim().parse().unwrap();
    //Parse amount to an u32 number.
    amount = amount * 100.0;
    let mut amount = amount as u32;

    //Create 2 vectos with cedules and coins, all represented by unsigned ints.;
    let cedules : [u32; 6]= [10000, 5000, 2000, 1000, 500, 200];
    let coins : [u32; 6]= [100, 50, 25, 10, 5, 1];

    println!("NOTAS:");
    for cedule in cedules.iter(){
        let quantity : u32 = amount / cedule;
        amount = amount % cedule;
        let value : f64 = (*cedule / 100) as f64;
        println!("{} nota(s) de R$ {:.2}", quantity, value);
    }

    println!("MOEDAS:");
    for coin in coins.iter(){
        let quantity : u32 = amount / coin;
        amount = amount % coin;
        let value : f64 = (*coin as f64)/100.0;
        println!("{} moeda(s) de R$ {:.2}", quantity, value);
    }

}

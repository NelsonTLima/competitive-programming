use std::io;

//greatest common divisor.
fn gcd(n : i64 , d : i64) -> i64{
    let smaller;
    if n > d {smaller = d;} else {smaller = n;}

    let mut divisor = smaller;
    while divisor != 0{
        if (n % divisor == 0) && (d % divisor == 0) {break}
        divisor = divisor - 1;
    }
    return divisor
}

fn fraction_sum(n1 : i64, d1 : i64,n2 : i64, d2 : i64) -> (i64, i64) {
    let n = n1 * d2 + n2 * d1;
    let d = d1 * d2;
    return (n, d)
}

fn fraction_sub(n1 : i64, d1 : i64,n2 : i64, d2 : i64) -> (i64, i64) {
    let mut n = n1 * d2 - n2 * d1;
    let mut d = d1 * d2;

    if (d < 0) & (n > 0){
        n = - n;
        d = - d;
    }
    return (n, d)
}

fn fraction_mul(n1 : i64, d1 : i64,n2 : i64, d2 : i64) -> (i64, i64) {
    let n = n1 * n2;
    let d = d1 * d2;
    return (n, d)
}

fn simplify_fraction(n : i64, d : i64) -> (i64, i64){
    let mut sn = n/gcd(n, d);
    let mut sd = d/gcd(n, d);

    if (sd < 0) && (sn > 0){
        sn = - sn;
        sd = - sd;
    }
    return (sn, sd);
}

fn main() {
    let mut n = String::new();

    io::stdin().read_line(&mut n).expect("Didn't read the line.");
    let n : u32 = n.trim().parse().unwrap();
    let mut result : String;
    let mut results : Vec<String>= vec![];

    for _i in 0..n{
        let mut input = String::new();
        io::stdin().read_line(&mut input).expect("Didn't read the line.");

        //split input.
        let input : Vec<&str>= input.trim().split(" ").collect();

        // num -> numerator | den -> denominator
        let num_1 : i64 = input[0].parse().unwrap();
        let den_1 : i64 = input[2].parse().unwrap();
        let operator = input[3];
        let num_2 : i64 = input[4].parse().unwrap();
        let den_2 : i64 = input[6].parse().unwrap();

        match operator{
            "+" => {
            let (num, den) = fraction_sum(num_1, den_1, num_2, den_2);
            let (r_num, r_den) = simplify_fraction(num, den);
            result = format!("{}/{} = {}/{}",num, den, r_num, r_den);
            results.push(result);
            }

            "-" => {
            //let (num, den) = fraction_sum(num_1, den_1, -num_2, den_2);
            let (num, den) = fraction_sub(num_1, den_1, num_2, den_2);
            let (r_num, r_den) = simplify_fraction(num, den);
            result = format!("{}/{} = {}/{}",num, den, r_num, r_den);
            results.push(result);
            }

            "*" => {
            let (num, den) = fraction_mul(num_1, den_1, num_2, den_2);
            let (r_num, r_den) = simplify_fraction(num, den);
            result = format!("{}/{} = {}/{}",num, den, r_num, r_den);
            results.push(result);
            }

            "/" => {
            let (num, den) = fraction_mul(num_1, den_1, den_2, num_2);
            let (r_num, r_den) = simplify_fraction(num, den);
            result = format!("{}/{} = {}/{}",num, den, r_num, r_den);
            results.push(result);
            }

            _ => println!("Invalid operation.")
        }
    }

    for i in results.iter(){
        println!("{}", i)
    }
}

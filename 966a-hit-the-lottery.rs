use std::io;

fn main() {
    let mut buffer = String::new();
    io::stdin().read_line(&mut buffer).expect("Read Error");
    buffer = buffer.trim().to_string();
    let mut number = buffer.parse::<i64>().expect("Parse Error");

    let mut count = 0;
    while number >= 100 {
        number -= 100;
        count += 1;
    }
    while number >= 20 {
        number -= 20;
        count += 1;
    }
    while number >= 10 {
        number -= 10;
        count += 1;
    }
    while number >= 5 {
        number -= 5;
        count += 1;
    }
    while number >= 1 {
        number -= 1;
        count += 1;
    }
    println!("{}", count);
}

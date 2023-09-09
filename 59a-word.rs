use std::io;

fn main() {
    let mut buffer = String::new();
    io::stdin().read_line(&mut buffer).expect("Read Error");
    let mut upper: i32 = 0;
    let mut lower: i32 = 0;

    buffer.chars().for_each(|ch| -> () {
        if ch.is_uppercase() {
            upper += 1;
        }
        else if ch.is_lowercase() {
            lower += 1;
        }
    });
    if upper > lower {
       print!("{}", buffer.to_uppercase());
    } else {
       print!("{}", buffer.to_lowercase());
    }
}

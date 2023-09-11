use std::io;

fn main() {
    let mut buffer = String::new();
    io::stdin().read_line(&mut buffer).expect("read error");

    let num = buffer.trim().parse::<i64>().expect("Parse error");
    if num % 2 == 0 {
        println!("{}", num / 2);
    } else {
        println!("{}", -(num + 1) / 2);
    }
}

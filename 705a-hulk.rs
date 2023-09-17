use std::io;

fn main() {
    let mut buffer = String::new();
    io::stdin().read_line(&mut buffer).expect("Read Error");

    let n = buffer.trim().parse::<i32>().expect("Parse Error");
    
    let mut out = "I hate ".to_string();
    for i in 1..n + 1 {
        if i > 1 {
            out.push_str("that I ");
            if i % 2 == 0 {
                out.push_str("love ");
            } else {
                out.push_str("hate ");
            }
        }
    }

    out.push_str("it");
    println!("{}", out);
}

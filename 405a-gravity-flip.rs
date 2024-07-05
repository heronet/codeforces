fn main() {
    let mut count_s = String::new();
    std::io::stdin().read_line(&mut count_s).unwrap();

    let mut arr_s = String::new();
    std::io::stdin().read_line(&mut arr_s).unwrap();

    let mut arr: Vec<i32> = arr_s
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    arr.sort();

    for n in arr {
        print!("{n} ");
    }
    println!();
}

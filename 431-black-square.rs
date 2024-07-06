use std::collections::HashMap;

fn main() {
    let mut arr_s = String::new();
    std::io::stdin().read_line(&mut arr_s).unwrap();

    let arr: Vec<i32> = arr_s
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let mut s = String::new();
    std::io::stdin().read_line(&mut s).expect("Err");

    let map = HashMap::from([('1', arr[0]), ('2', arr[1]), ('3', arr[2]), ('4', arr[3])]);

    let mut count = 0;

    s.trim().chars().for_each(|x| count += map[&x]);

    println!("{count}");
}

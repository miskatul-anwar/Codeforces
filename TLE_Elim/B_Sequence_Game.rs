use std::io::{self};

fn main() {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read input");
    let t: usize = input.trim().parse().expect("Invalid number");

    for _ in 0..t {
        input.clear();
        io::stdin()
            .read_line(&mut input)
            .expect("Failed to read input");
        let n: usize = input.trim().parse().expect("Invalid number");

        input.clear();
        io::stdin()
            .read_line(&mut input)
            .expect("Failed to read input");
        let arr: Vec<i64> = input
            .trim()
            .split_whitespace()
            .map(|x| x.parse().expect("Invalid number"))
            .collect();

        let mut ans = Vec::new();
        ans.push(arr[0]);

        for i in 1..n {
            if arr[i - 1] <= arr[i] {
                ans.push(arr[i]);
            } else {
                ans.push(1);
                ans.push(arr[i]);
            }
        }

        println!("{}", ans.len());
        println!(
            "{}",
            ans.iter()
                .map(|x| x.to_string())
                .collect::<Vec<_>>()
                .join(" ")
        );
    }
}

use text_io::read;

fn main() {
    let t: usize = read!();
    for _ in 0..t {
        let n: usize = read!();
        let arr: Vec<i64> = (0..n).map(|_| read!()).collect();

        let mut ans = vec![arr[0]];
        for i in 1..n {
            if arr[i - 1] <= arr[i] {
                ans.push(arr[i]);
            } else {
                ans.push(1);
                ans.push(arr[i]);
            }
        }

        println!("{}", ans.len());
        for x in &ans {
            print!("{} ", x);
        }
        println!();
    }
}

// use num_bigint::BigUint;
use std::convert::TryInto;
use num_bigfloat::BigFloat;
use num_bigfloat::ONE;
use num_bigfloat::PI;
use std::time::Instant;


 fn pow(n: u128, exp: u128) -> u128{
    n.pow(exp.try_into().expect("exponent too large for pow()"))
}

fn main() {
    let x: u128 = 16u32.into();
//    let mut m1 : f64 = 0.0.into() ;

   for y in num_iter::range_inclusive(u128::from(0u64), u128::from(10u64)) {
        println!(" {} ", pow(x.clone(),y) );
    //    m1 = 1.0 / f64::from(pow(x.clone(),y)) ;
    }
    // compute pi: pi = 6*arctan(1/sqrt(3))
    let start = Instant::now();
let six: BigFloat = 6.0.into(); // note: conversion from f64,f32 are not loss-less.
let three: BigFloat = BigFloat::parse("3.0").unwrap();
let pi = six * (ONE / three.sqrt()).atan();
let duration = start.elapsed();

let epsilon = 1.0e-50.into();

assert!((pi - PI).abs() < epsilon);

println!("pi is {:.64}", pi);
println!("PI is {:.64}", PI);
println!("Time elapsed: {:.9} seconds!", duration.as_secs_f64());
}

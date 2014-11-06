//
//  FizzBuzz.h
//  FizzBuzz
//
//  Created by offz on 11/6/2557 BE.
//  Copyright (c) 2557 offz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FizzBuzz : NSObject


/**
 * Method that takes one number
 * if the number is divided by 3 return "Fizz"
 * if the number is divided by 5 return "Buzz"
 * if the number is divided by 15 return "FizzBuzz"
 *
 * @param number 
 * @return a string Fizz, Buzz, or FizzBuzz
 */
- (NSString *)fizzbuzz:(NSInteger)number;


@end

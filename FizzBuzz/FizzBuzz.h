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
 * Method that takes one number.
 * If the number is divided by 3 return "Fizz".
 * If the number is divided by 5 return "Buzz".
 * If the number is divided by 15 return "FizzBuzz".
 * If none of the above satisfied, return input as a string.
 *
 * @param number 
 * @return string of number or Fizz, Buzz, FizzBuzz
 */
- (NSString *)take:(NSInteger)number;


@end

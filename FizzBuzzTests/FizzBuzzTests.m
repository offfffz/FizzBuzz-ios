//
//  FizzBuzzTests.m
//  FizzBuzzTests
//
//  Created by offz on 11/6/2557 BE.
//  Copyright (c) 2557 offz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <XCTest/XCTest.h>
#import "FizzBuzz.h"

@interface FizzBuzzTests : XCTestCase
@property (strong, nonatomic) FizzBuzz *fizzBuzz;
@end

@implementation FizzBuzzTests

- (void)setUp {
    [super setUp];
    self.fizzBuzz = [FizzBuzz new];
}

- (void)tearDown {
    self.fizzBuzz = nil;
    [super tearDown];
}

@end

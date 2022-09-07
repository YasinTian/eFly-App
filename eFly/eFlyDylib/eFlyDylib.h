//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  eFlyDylib.h
//  eFlyDylib
//
//  Created by yasintian on 2020/3/17.
//  Copyright (c) 2020 efly. All rights reserved.
//

#import <Foundation/Foundation.h>

#define INSERT_SUCCESS_WELCOME "               🎉!!！congratulations!!！🎉\n👍----------------insert dylib success----------------👍\n"

@interface CustomViewController

@property (nonatomic, copy) NSString* newProperty;

+ (void)classMethod;

- (NSString*)getMyName;

- (void)newMethod:(NSString*) output;

@end

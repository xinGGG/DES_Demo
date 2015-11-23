//
//  DES3Util.h
//  DragonPass
//
//  Created by nero on 13-4-7.
//  Copyright (c) 2013年 www.dragonpass.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DES3Util : NSObject
// 加密方法
+ (NSString*)encrypt:(NSString*)plainText;

// 解密方法
+ (NSString*)decrypt:(NSString*)encryptText;

//解密方法
+(NSData*)decryptsData:(NSData*)encryptData;

@end

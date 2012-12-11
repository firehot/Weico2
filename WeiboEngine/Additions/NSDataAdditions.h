//
//  NSDataAdditions.h
//  Weico2
//
//  Created by qianfeng on 12-12-11.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface NSData (Addtions)

/**
 * Calculate the md5 hash of this data using CC_MD5.
 *
 * @return md5 hash of this data
 */
@property (nonatomic, readonly) NSString* md5Hash;


@end
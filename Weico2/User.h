//
//  User.h
//  Weico2
//
//  Created by qianfeng on 12-12-11.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    GenderUnknow = 0,
    GenderMale,
    GenderFemale,
}Gender;

@interface User : NSObject
{
    int64_t userId; //用户UID
    NSNumber * userKey;
    NSString * screenName;
    NSString * name;
    NSString * province;
    NSString * city;
    NSString * location;
    NSString * description;
    NSString * url;//用户博客地址
    NSString * profileImageUrl;//用户头像细致50*50
    UIImage  * avatarImage;
    NSString * profileLargeImageUrl;
    NSString * domain;//用户个性化URL；
    Gender     gender;
    int     followersCount;
    int     friendsCount;
    int     statusCount;
    int     favourtCounts;
    time_t  CreatAt;//用户注册时间
    BOOL    following;//暂未支持
    BOOL    verified;
    BOOL    allowAllActMsg;//是否允许所有人给我发私信，true：是，false：否 
    BOOL    geoEnabled;//是否允许标识用户的地理位置，true：是，false：否 
}

@property (nonatomic, assign) int64_t userId;
@property (nonatomic, retain) NSNumber * userKey;
@property (nonatomic, retain) NSString * screenName;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * province;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * location;
@property (nonatomic, retain) NSString * description;
@property (nonatomic, retain) NSString * url;
@property (nonatomic, retain) NSString * profileImageUrl;
@property (nonatomic, retain) NSString * profileLargeImageUrl;
@property (nonatomic, retain) NSString * domain;
@property (nonatomic, assign) Gender gender;
@property (nonatomic, assign) int  followersCount;
@property (nonatomic, assign) int  friendsCount;
@property (nonatomic, assign) int  statusesCount;
@property (nonatomic, assign) int  favoritesCount;
@property (nonatomic, assign) time_t	createdAt;
@property (nonatomic, assign) BOOL      following;
@property (nonatomic, assign) BOOL		verified;
@property (nonatomic, assign) BOOL		allowAllActMsg;
@property (nonatomic, assign) BOOL		geoEnabled;
@property (nonatomic, retain) UIImage *    avatarImage;

+(User *)userWithJsonDictionary:(NSDictionary *)dic;
-(User *)initWithJsonDictionary:(NSDictionary *)dic;
-(void)updateWithJSonDictionary:(NSDictionary *)dic;

@end

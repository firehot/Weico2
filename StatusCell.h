//
//  StatusCell.h
//  Weico2
//
//  Created by qianfeng on 12-12-12.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Status.h"
#import "User.h"
#import "BaseCell.h"
@protocol StatusCellDelegete;

@interface StatusCell : BaseCell
{
    id<StatusCellDelegete> delegate;
    
    UIImageView * avatarImage;
    UITextView * contentTF;
    UILabel * userNameLB;
    UIImageView * bgImage;
    UIView * retwitterMainV;
    UIImageView * retwitterBgImage;
    UITextView * retwitterContentTF;
    UIImageView * retwitterContentImage;
    NSIndexPath * cellIndexPath;
}

@property (nonatomic, retain) IBOutlet UILabel * countLB;
@property (nonatomic, retain) IBOutlet UIImageView * avatarImage;
@property (nonatomic, retain) IBOutlet UITextView * contentTF;
@property (nonatomic, retain) IBOutlet UILabel * userNameLB;
@property (nonatomic, retain) IBOutlet UIImageView * bgImage;
@property (nonatomic, retain) IBOutlet UIImageView * contentImage;
@property (nonatomic, retain) IBOutlet UIView * retwitterBgImage;
@property (nonatomic, retain) IBOutlet UIView * retwitterMainV;
@property (retain, nonatomic) IBOutlet UITextView *retwitterContentTF;
@property (nonatomic, retain) IBOutlet UIImageView * retwitterContentImage;
@property (nonatomic, retain) id<StatusCellDelegete> delegate;
@property (nonatomic, retain) NSIndexPath * cellIndexPath;
@property (nonatomic, retain) IBOutlet UILabel * fromLB;
@property (nonatomic, retain) IBOutlet UILabel * timeLB;

-(CGFloat)setTFHeightWithImage:(BOOL)hasImage haveRetwitterImage:(BOOL)haveRetwitterImage;
-(void)setupCell:(Status *)status avatarImageData:(NSData *)avatarData contentImageData:(NSData *)imageData;

@end

@protocol StatusCellDelegete <NSObject>

-(void)cellImageDidTaped:(StatusCell *)theCell image:(UIImage *)image;
@end

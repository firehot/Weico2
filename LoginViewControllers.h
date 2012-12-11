//
//  LoginViewControllers.h
//  Weico2
//
//  Created by qianfeng on 12-12-11.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "OAuthManager.h"
#import "ASIHTTPRequest.h"


@interface LoginViewController : UIViewController<UIGestureRecognizerDelegate>
{
    UIImageView * login_avarta_weiboView;
    UIImageView * signup_avarta_weiboView;
    
    UILabel * loginLabel;
    UILabel * signupLabel;
    
    UIButton * login_back;
    UIButton * login_ok;
    
    UITextField * nameField;
    UITextField * passwordField;
    
//    SinaOAuthManager * sinaOAuthManager;
}
@end


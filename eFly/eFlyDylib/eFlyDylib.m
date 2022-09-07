//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  eFlyDylib.m
//  eFlyDylib
//
//  Created by yasintian on 2020/3/17.
//  Copyright (c) 2020 efly. All rights reserved.
//

#import "eFlyDylib.h"
#import <CaptainHook/CaptainHook.h>
#import <UIKit/UIKit.h>
#import <Cycript/Cycript.h>
#import <MDCycriptManager.h>
#import <CoreLocation/CoreLocation.h>

static CLLocationManager *locationManager;
CHConstructor{
    printf(INSERT_SUCCESS_WELCOME);
    
    NSString* phoneVersion = [[UIDevice currentDevice] systemVersion];
    CGFloat version = [phoneVersion floatValue];
    if([CLLocationManager authorizationStatus]==kCLAuthorizationStatusNotDetermined && version >= 13){
        locationManager = [[CLLocationManager alloc]init];
        [locationManager requestAlwaysAuthorization];
    }
}

CHDeclareClass(UIAlertController)

CHOptimizedClassMethod3(self, UIAlertController *, UIAlertController, alertControllerWithTitle, NSString *, title, message, NSString *, titlep, preferredStyle, NSInteger, preferredStyle) {
    UIAlertController *alert = CHSuper3(UIAlertController, alertControllerWithTitle, title, message, titlep, preferredStyle, UIAlertControllerStyleActionSheet);
    alert.popoverPresentationController.sourceView = [UIApplication sharedApplication].keyWindow;
    alert.popoverPresentationController.sourceRect = CGRectMake([UIScreen mainScreen].bounds.size.width/2.0, [UIScreen mainScreen].bounds.size.height - 200, 10, 10);
    return alert;
}

CHConstructor{
    CHLoadLateClass(UIAlertController);
    CHClassHook3(UIAlertController, alertControllerWithTitle, message, preferredStyle);
}



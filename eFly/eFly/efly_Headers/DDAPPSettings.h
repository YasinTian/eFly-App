//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DDAPPSettings : NSObject
{
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isTutorship;
@property(nonatomic) unsigned long long shotMult;
@property(nonatomic) unsigned long long shotDelay;
@property(nonatomic) unsigned long long shotMode;
@property(nonatomic) unsigned long long droneFace;
@property(nonatomic) double controlSpeed;
@property(nonatomic) unsigned long long controlMode;
@property(nonatomic) unsigned long long operationMode;
@property(nonatomic) _Bool isPlayedTutorshipVideo;
@property(nonatomic) _Bool isInited;
@property(nonatomic) _Bool hiddenPrivacyPllicy;
- (void)initData;
- (id)init;

@end


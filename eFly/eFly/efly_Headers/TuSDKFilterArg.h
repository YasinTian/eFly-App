//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TuSDKFilterArg : NSObject
{
    NSString *_mKey;
    double _mFloatValue;
    double _mDefaultValue;
    double _mMinFloatValue;
    double _mMaxFloatValue;
    _Bool _mIsChanged;
}

+ (id)arg;
- (void).cxx_destruct;
@property(nonatomic) double precent;
- (void)reset;
@property(nonatomic) _Bool isChanged;
- (void)setMaxFloatValue:(double)arg1;
- (void)setMinFloatValue:(double)arg1;
- (void)setDefaultValue:(double)arg1;
- (void)setFloatValue:(double)arg1;
@property(readonly, nonatomic) double value;
- (void)setKey:(id)arg1;
@property(readonly, nonatomic) NSString *key;

@end


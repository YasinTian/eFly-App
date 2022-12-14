//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TuSDKFilterConfigDelegate-Protocol.h"

@class NSArray, NSString, TuSDKFilterLocalPackage, TuSDKFilterWrap;
@protocol TuSDKFilterManagerDelegate;

@interface TuSDKFilterManager : NSObject <TuSDKFilterConfigDelegate>
{
    TuSDKFilterLocalPackage *_config;
    TuSDKFilterWrap *_currentWrap;
    id <TuSDKFilterManagerDelegate> _delegate;
}

+ (id)initWithConfig:(id)arg1;
+ (id)manager;
@property(nonatomic) __weak id <TuSDKFilterManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)processWithImage:(id)arg1 orientation:(long long)arg2 byFilterCode:(id)arg3;
- (id)processWithImage:(id)arg1 byFilterCode:(id)arg2;
- (void)onTuSDKFilterConfigInited;
- (_Bool)isNormalFilter:(id)arg1;
- (unsigned long long)groupTypeWithFilterCode:(id)arg1;
- (id)filterWrapWithCode:(id)arg1;
@property(readonly, nonatomic) NSArray *filterCodes;
- (void)notifyStates;
- (void)checkManagerWithDelegate:(id)arg1;
@property(readonly, nonatomic) _Bool isInited;
- (void)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TuSDKCPRegionHandler-Protocol.h"

@class NSString, TuSDKTSAnimation;

@interface TuSDKCPRegionDefaultHandler : NSObject <TuSDKCPRegionHandler>
{
    struct CGRect _rectPercent;
    TuSDKTSAnimation *_anim;
    double _ratio;
    struct CGSize _wrapSize;
}

@property(retain, nonatomic) TuSDKTSAnimation *anim; // @synthesize anim=_anim;
@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(nonatomic) struct CGSize wrapSize; // @synthesize wrapSize=_wrapSize;
- (void).cxx_destruct;
- (struct CGRect)changeWithRatio:(double)arg1 changer:(CDUnknownBlockType)arg2;
- (struct CGRect)recalculateWithRatio:(double)arg1 size:(struct CGSize)arg2;
@property(readonly, nonatomic) struct CGRect rectPercent;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


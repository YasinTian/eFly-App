//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIGestureRecognizerDelegate-Protocol.h"

@protocol TuSDKICGestureRecognizerViewDelegate;

@protocol TuSDKICGestureRecognizerViewInterface <UIGestureRecognizerDelegate>
@property(readonly, nonatomic) double scalePrecent;
@property(readonly, nonatomic) double degreePrecent;
@property(readonly, nonatomic) struct CGPoint pointPrecent;
@property(nonatomic) __weak id <TuSDKICGestureRecognizerViewDelegate> delegate;
- (void)reset;
@end

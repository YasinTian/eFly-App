//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDBaseHandler.h"

@protocol DDConnectionStateHandlerDelegate;

@interface DDConnectionStateHandler : DDBaseHandler
{
    id <DDConnectionStateHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <DDConnectionStateHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)reachabilityStatusChanged:(id)arg1;
- (void)removeWIFINotificationObservers;
- (void)addWIFINotificationObservers;
- (void)stopListenConnectionStatus;
- (void)startListenConnectionStatus;

@end


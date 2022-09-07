//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDBaseViewController.h"

#import "DDConnectionStateHandlerDelegate-Protocol.h"

@class DDConnectionStateHandler, NSString;

@interface DDBaseListenConnectionViewController : DDBaseViewController <DDConnectionStateHandlerDelegate>
{
    _Bool _currentConnect;
    DDConnectionStateHandler *_connectionStateHandler;
}

@property(retain, nonatomic) DDConnectionStateHandler *connectionStateHandler; // @synthesize connectionStateHandler=_connectionStateHandler;
- (void).cxx_destruct;
- (void)deviceConnectionStatus:(_Bool)arg1;
- (void)connectedDevice:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


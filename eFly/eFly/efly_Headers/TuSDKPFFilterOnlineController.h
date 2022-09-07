//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKPFFilterOnlineControllerBase.h"

#import "TuSDKCPFilterOnlineControllerInterface-Protocol.h"

@class NSString, TuSDKCPOnlineView;
@protocol TuSDKCPFilterOnlineControllerDelegate;

@interface TuSDKPFFilterOnlineController : TuSDKPFFilterOnlineControllerBase <TuSDKCPFilterOnlineControllerInterface>
{
    TuSDKCPOnlineView *_defaultStyleView;
    Class _viewClazz;
    id <TuSDKCPFilterOnlineControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <TuSDKCPFilterOnlineControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TuSDKCPOnlineView *defaultStyleView; // @synthesize defaultStyleView=_defaultStyleView;
- (void)setViewClazz:(Class)arg1;
- (void).cxx_destruct;
- (void)onHandleDetailWithID:(unsigned long long)arg1;
- (void)onHandleSelectedWithID:(unsigned long long)arg1;
- (void)buildDefaultStyleView;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)prefersStatusBarHidden;
- (id)webView;
- (Class)viewClazz;

// Remaining properties
@property(nonatomic) long long action;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long detailDataId;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


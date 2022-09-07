//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKICViewController.h"

@protocol TuSDKCPComponentErrorDelegate;

@interface TuSDKCPViewController : TuSDKICViewController
{
    id <TuSDKCPComponentErrorDelegate> _errorDelegate;
}

@property(nonatomic) __weak id <TuSDKCPComponentErrorDelegate> errorDelegate; // @synthesize errorDelegate=_errorDelegate;
- (void).cxx_destruct;
- (void)configDefaultStyleView:(id)arg1;
- (void)buildDefaultStyleView;
- (void)notifyErrorType:(long long)arg1 result:(id)arg2;
- (void)notifyError:(id)arg1 result:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;

@end

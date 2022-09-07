//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDBaseViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class DDTopTabView, DDTutorshipManualViewController, DDTutorshipQAViewController, DDTutorshipVideoViewController, NSArray, NSString, UIScrollView;

@interface DDMainTutorshipViewController : DDBaseViewController <UIScrollViewDelegate>
{
    unsigned long long _currentIndex;
    _Bool isInited;
    DDTutorshipVideoViewController *_videoController;
    DDTutorshipManualViewController *_manualController;
    DDTutorshipQAViewController *_qaController;
    UIScrollView *_scrollView;
    DDTopTabView *_topView;
    NSArray *_dataList;
}

@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) DDTopTabView *topView; // @synthesize topView=_topView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)itmeViewWillDisappear:(unsigned long long)arg1;
- (void)itmeViewWillAppear:(unsigned long long)arg1;
- (void)updateItem:(unsigned long long)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setupNavigationView;
- (void)setupChildViewController;
- (void)initUI;
- (void)initData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


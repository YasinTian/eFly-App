//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TuSDKICPagerHolder;
@protocol TuSDKICPagerViewDataSource;

@interface TuSDKICPagerView : UIScrollView <UIScrollViewDelegate>
{
    NSMutableArray *_subs;
    unsigned long long _subCount;
    unsigned long long _pageIndex;
    _Bool _isScrollEnd;
    double _padding;
    _Bool _willChangeOrientation;
    _Bool _isAnimation;
    id <TuSDKICPagerViewDataSource> _dataSource;
    double _scaleMaxZoom;
}

+ (id)initWithFrame:(struct CGRect)arg1 pagePadding:(double)arg2;
@property(readonly, nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(nonatomic) _Bool willChangeOrientation; // @synthesize willChangeOrientation=_willChangeOrientation;
@property(nonatomic) double scaleMaxZoom; // @synthesize scaleMaxZoom=_scaleMaxZoom;
@property(nonatomic) id <TuSDKICPagerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (_Bool)isScrollEnd;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void)unloadSubView:(unsigned long long)arg1;
- (void)loadSubView:(unsigned long long)arg1;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForPagingScrollView;
- (void)viewWillDestory;
- (void)viewNeedRest;
- (void)cancelSingleTapAction;
- (void)didChangeOrientation;
@property(readonly, nonatomic) TuSDKICPagerHolder *currentHolder;
- (void)setScrollViewContentSize;
- (void)scrollToIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPages;
- (void)reloadData;
- (void)initViewWithPagePadding:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pagePadding:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


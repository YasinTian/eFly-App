//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, ReaderContentPage, ReaderContentThumb, UIView;
@protocol ReaderContentViewDelegate;

@interface ReaderContentView : UIScrollView <UIScrollViewDelegate>
{
    UIView *theContainerView;
    long long userInterfaceIdiom;
    ReaderContentPage *theContentPage;
    ReaderContentThumb *theThumbView;
    double realMaximumZoom;
    double tempMaximumZoom;
    _Bool zoomBounced;
    id <ReaderContentViewDelegate> message;
}

+ (void)initialize;
@property(nonatomic) __weak id <ReaderContentViewDelegate> message; // @synthesize message;
- (void).cxx_destruct;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)zoomResetAnimated:(_Bool)arg1;
- (void)zoomDecrement:(id)arg1;
- (void)zoomIncrement:(id)arg1;
- (struct CGRect)zoomRectForScale:(double)arg1 withCenter:(struct CGPoint)arg2;
- (id)processSingleTap:(id)arg1;
- (void)showPageThumb:(id)arg1 page:(long long)arg2 password:(id)arg3 guid:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 fileURL:(id)arg2 page:(unsigned long long)arg3 password:(id)arg4;
- (void)centerScrollViewContent;
- (void)updateMinimumMaximumZoom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

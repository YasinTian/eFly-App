//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TuSDKPFBrush, UIImage;
@protocol TuSDKICSmudgeImageViewDelegate;

@protocol TuSDKICSmudgeImageViewInterface <NSObject>
@property(nonatomic) __weak id <TuSDKICSmudgeImageViewDelegate> delegate;
- (void)destroyHistory;
- (void)destroy;
- (UIImage *)getOriginalImage;
- (UIImage *)getSmudgeImage;
- (UIImage *)getCanvasImage:(UIImage *)arg1;
- (void)needUpdateLayout;
- (void)showOriginal:(_Bool)arg1;
- (void)redo;
- (void)undo;
- (void)setMaxUndoCount:(unsigned long long)arg1;
- (void)setBrushCustomSize:(double)arg1;
- (void)setBrushSize:(long long)arg1;
- (void)setBrush:(TuSDKPFBrush *)arg1;
- (void)setImage:(UIImage *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol DDLiveViewDelegate, IJKMediaPlayback;

@interface DDLiveView : UIView
{
    id <DDLiveViewDelegate> _delegate;
    id <IJKMediaPlayback> _player;
    UIView *_disPlayView;
}

@property(retain) UIView *disPlayView; // @synthesize disPlayView=_disPlayView;
@property(retain) id <IJKMediaPlayback> player; // @synthesize player=_player;
@property(retain, nonatomic) id <DDLiveViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeMovieNotificationObservers;
- (void)installMovieNotificationObservers;
- (void)moviePlayFrameCallBack:(id)arg1;
- (void)moviePlayBackStateDidChange:(id)arg1;
- (void)mediaIsPreparedToPlayDidChange:(id)arg1;
- (void)moviePlayBackDidFinish:(id)arg1;
- (void)loadStateDidChange:(id)arg1;
- (void)playLiveUrl:(id)arg1;
- (void)shutdownLive;
- (void)playLive;
- (id)initForView:(id)arg1;

@end

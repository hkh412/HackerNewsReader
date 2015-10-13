//
//  UIViewController+ActivityIndicator.h
//  HackerNewsReader
//
//  Created by Ryan Nystrom on 6/1/15.
//  Copyright (c) 2015 Ryan Nystrom. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (ActivityIndicator)

- (UIActivityIndicatorView *)hn_activityIndicator;
- (void)hn_insertActivityIndicator;
- (void)hn_hideActivityIndicator;

@end

NS_ASSUME_NONNULL_END

//
//  WebViewController.h
//  BusinessApplication
//
//  Created by chang on 14/09/2019.
//  Copyright © 2019 chang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WebViewController : UIViewController <WKNavigationDelegate>

@property (strong, nonatomic) NSArray *detailModal;

@property (weak, nonatomic) IBOutlet WKWebView *webView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *actInd;

- (IBAction)refresh:(id)sender;
- (IBAction)stop:(id)sender;
- (IBAction)rewind:(id)sender;
- (IBAction)forward:(id)sender;



@end

NS_ASSUME_NONNULL_END

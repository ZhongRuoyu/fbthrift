/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/services_wrapper.h>
#include <src/gen-py3/module/services_api.h>
#include <thrift/lib/cpp2/async/AsyncProcessor.h>

namespace test {
namespace fixtures {
namespace basic {

MyServiceWrapper::MyServiceWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_test__fixtures__basic__module__services();
  }


void MyServiceWrapper::async_tm_ping(
  std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_MyService_ping(
            this->if_object,
            ctx,
            std::move(promise)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceWrapper::async_tm_getRandomData(
  std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<std::unique_ptr<std::string>>();
        call_cy_MyService_getRandomData(
            this->if_object,
            ctx,
            std::move(promise)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<std::unique_ptr<std::string>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceWrapper::async_tm_sink(
  std::unique_ptr<apache::thrift::HandlerCallback<void>> callback
    , int64_t sink
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
sink    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_MyService_sink(
            this->if_object,
            ctx,
            std::move(promise),
            sink        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceWrapper::async_tm_putDataById(
  std::unique_ptr<apache::thrift::HandlerCallback<void>> callback
    , int64_t id
    , std::unique_ptr<std::string> data
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
id,
data = std::move(data)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_MyService_putDataById(
            this->if_object,
            ctx,
            std::move(promise),
            id,
            std::move(data)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceWrapper::async_tm_hasDataById(
  std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback
    , int64_t id
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
id    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<bool>();
        call_cy_MyService_hasDataById(
            this->if_object,
            ctx,
            std::move(promise),
            id        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<bool>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceWrapper::async_tm_getDataById(
  std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback
    , int64_t id
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
id    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<std::unique_ptr<std::string>>();
        call_cy_MyService_getDataById(
            this->if_object,
            ctx,
            std::move(promise),
            id        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<std::unique_ptr<std::string>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceWrapper::async_tm_deleteDataById(
  std::unique_ptr<apache::thrift::HandlerCallback<void>> callback
    , int64_t id
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
id    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_MyService_deleteDataById(
            this->if_object,
            ctx,
            std::move(promise),
            id        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceWrapper::async_tm_lobDataById(
  std::unique_ptr<apache::thrift::HandlerCallbackBase> callback
    , int64_t id
    , std::unique_ptr<std::string> data
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
id,
data = std::move(data)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_MyService_lobDataById(
            this->if_object,
            ctx,
            std::move(promise),
            id,
            std::move(data)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          
        });
    });
}
void MyServiceWrapper::async_tm_invalid_return_for_hack(
  std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::set<float>>>> callback) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<std::unique_ptr<std::set<float>>>();
        call_cy_MyService_invalid_return_for_hack(
            this->if_object,
            ctx,
            std::move(promise)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<std::unique_ptr<std::set<float>>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
std::shared_ptr<apache::thrift::ServerInterface> MyServiceInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<MyServiceWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> MyServiceWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_MyService_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> MyServiceWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_MyService_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}


DbMixedStackArgumentsWrapper::DbMixedStackArgumentsWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_test__fixtures__basic__module__services();
  }


void DbMixedStackArgumentsWrapper::async_tm_getDataByKey0(
  std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback
    , std::unique_ptr<std::string> key
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
key = std::move(key)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<std::unique_ptr<std::string>>();
        call_cy_DbMixedStackArguments_getDataByKey0(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(key)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<std::unique_ptr<std::string>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void DbMixedStackArgumentsWrapper::async_tm_getDataByKey1(
  std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback
    , std::unique_ptr<std::string> key
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
key = std::move(key)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<std::unique_ptr<std::string>>();
        call_cy_DbMixedStackArguments_getDataByKey1(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(key)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<std::unique_ptr<std::string>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
std::shared_ptr<apache::thrift::ServerInterface> DbMixedStackArgumentsInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<DbMixedStackArgumentsWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> DbMixedStackArgumentsWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_DbMixedStackArguments_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> DbMixedStackArgumentsWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_DbMixedStackArguments_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
} // namespace test
} // namespace fixtures
} // namespace basic
